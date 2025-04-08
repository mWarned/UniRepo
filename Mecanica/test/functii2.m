clc; clear all;

x = 0:0.01:10;
y1 = sin(x) + cos(x * pi/2);
y2 = cos(2 * x);

printMinMaxBoundary(x, y1);

printMinMaxBoundary(x, y2);

function printMinMaxBoundary(x, y)
    figure;
    hold on;
    grid on;
    
    plot(x, y, 'b-', 'LineWidth', 1.5);
    
    [ymin, min_idx] = min(y);
    [ymax, max_idx] = max(y);
    
    plot(x(min_idx), ymin, 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'r');
    text(x(min_idx), ymin, sprintf(' Min: %.2f', ymin), 'VerticalAlignment', 'top', 'HorizontalAlignment', 'right');
    
    plot(x(max_idx), ymax, 'go', 'MarkerSize', 8, 'MarkerFaceColor', 'g');
    text(x(max_idx), ymax, sprintf('Max: %.2f ', ymax), 'VerticalAlignment', 'bottom', 'HorizontalAlignment', 'left');
    
    yline(ymin, 'r--', 'LineWidth', 1, 'Alpha', 0.5);
    yline(ymax, 'g--', 'LineWidth', 1, 'Alpha', 0.5);
    
    xlabel('x');
    ylabel('y');
    title('Function with Min/Max Boundaries');
    legend('y(x)', 'Minimum', 'Maximum', 'Min Boundary', 'Max Boundary');
    
    hold off;
end